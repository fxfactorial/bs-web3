type t;

type address;
[@bs.get] external accounts : t => Js.Array.t(address) = "";
[@bs.send] external getAccounts : t => Js.Promise.t(Js.Array.t(address)) = "";

type balance = string;
[@bs.send] external getBalance : t => address => balance = "";


