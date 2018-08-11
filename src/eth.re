type t;

type address;
[@bs.get] external coinbase : t => address = "";

type balance = string;
[@bs.send] external getBalance : t => address => balance = "";
