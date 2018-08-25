type global;
[@bs.val "web3"] external get : Js.undefined(global) = "";

type provider;
[@bs.get] external currentProvider : global => provider = "";

type t;
[@bs.new] [@bs.module] external makeWeb3 : provider => t = "web3";

[@bs.get] external eth : t => Eth.t = "";

type version;
[@bs.get] external version : global => version = "";
