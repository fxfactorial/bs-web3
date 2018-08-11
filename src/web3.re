type provider;
[@bs.val "web3.currentProvider"] external currentProvider : provider = "";

type t;
[@bs.new] [@bs.module] external makeWeb3 : provider => t = "web3";

[@bs.get] external eth : t => Eth.t = "";
