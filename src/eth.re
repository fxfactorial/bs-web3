type t;

type address = string;
[@bs.get] external accounts : t => Js.Array.t(address) = "";
[@bs.send] external getAccounts : t => Js.Promise.t(Js.Array.t(address)) = "";

type balance = string;
[@bs.send] external getBalance : t => address => balance = "";

type transaction_data;
[@bs.obj] external make_transaction : (~from:address) => transaction_data = "";

type contract_method;
[@bs.send] external call : contract_method => Js.Promise.t('a) = "";
[@bs.send.pipe : contract_method] external call_with : transaction_data => Js.Promise.t('a) = "call";

[@bs.send.pipe : contract_method] external send : transaction_data => Js.Promise.t('a) = "";
