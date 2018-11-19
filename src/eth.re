type t;
[@bs.get] external net : t => Net.t = "";

type address = string;
[@bs.get] external accounts : t => Js.Array.t(address) = "";
[@bs.send] external getAccounts : t => Js.Promise.t(Js.Array.t(address)) = "";

type balance = string;
[@bs.send] external getBalance : t => address => balance = "";

type transaction_data;
[@bs.obj] external make_transaction : (~from:address) => transaction_data = "";
[@bs.obj] external make_transaction_with_value : (~value:Types.big_number) => (~from:address) => transaction_data = "";

type contract_method('a);
[@bs.send] external call : contract_method('a) => Js.Promise.t('a) = "";
[@bs.send.pipe : contract_method('a)] external call_with : transaction_data => Js.Promise.t('a) = "call";

[@bs.send.pipe : contract_method('a)] external send : transaction_data => Js.Promise.t('a) = "";

type sign_callback = string => unit;
[@bs.send.pipe : t] external sign : string => address => Js.Promise.t(string) = "";
