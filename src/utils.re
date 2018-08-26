type unit_map = {
  .
  "noether": string,
  "wei": string,
  "kwei": string,
  "Kwei": string,
  "babbage": string,
  "femtoether": string,
  "mwei": string,
  "Mwei": string,
  "lovelace": string,
  "picoether": string,
  "gwei": string,
  "Gwei": string,
  "shannon": string,
  "nanoether": string,
  "nano": string,
  "szabo": string,
  "microether": string,
  "micro": string,
  "finney": string,
  "milliether": string,
  "milli": string,
  "ether": string,
  "kether": string,
  "grand": string,
  "mether": string,
  "gether": string,
  "tether": string
};

type t = {
  .
  "soliditySha3": unit => unit,
  "isAddress": unit => unit,
  "checkAddressChecksum": unit => unit,
  "toChecksumAddress": unit => unit,
  "toHex": unit => unit,
  "toBN": unit => unit,
  "bytesToHex": unit => unit,
  "hexToBytes": unit => unit,
  "hexToNumberString": unit => unit,
  "hexToNumber": unit => unit,
  "toDecimal": unit => unit,
  "numberToHex": unit => unit,
  "fromDecimal": unit => unit,
  "hexToUtf8": unit => unit,
  "hexToString": unit => unit,
  "toUtf8": unit => unit,
  "utf8ToHex": unit => unit,
  "stringToHex": unit => unit,
  "fromUtf8": unit => unit,
  "hexToAscii": unit => unit,
  "toAscii": unit => unit,
  "asciiToHex": unit => unit,
  "fromAscii": unit => unit,
  "unitMap": unit_map,
  "toWei": unit => unit,
  "fromWei": unit => unit,
  "padLeft": unit => unit,
  "leftPad": unit => unit,
  "padRight": unit => unit,
  "rightPad": unit => unit,
  "toTwosComplement": unit => unit
};

[@bs.scope "utils"] [@bs.module "web3"] external toBN : int => Types.big_number = "";
[@bs.scope "utils"] [@bs.module "web3"] external fromWei : Types.big_number => string => Types.big_number = "";
[@bs.scope "utils"] [@bs.module "web3"] external toWei : Types.big_number => string => Types.big_number = "";

[@bs.scope "utils"] [@bs.module "web3"] external soliditySha3 : 'a => string = "soliditySha3";
[@bs.scope "utils"] [@bs.module "web3"] external soliditySha3__2 : 'a => 'b => string = "soliditySha3";
[@bs.scope "utils"] [@bs.module "web3"] external soliditySha3__3 : 'a => 'b => 'c => string = "soliditySha3";
