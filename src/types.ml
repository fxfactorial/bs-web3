type provider_init_arg =
   [ | `provider of Providers.t | `provider_url of string] 

class type ['provider_impl] _module = object
  method set_provider : unit -> unit
end

type t

class type bzz = object
  inherit [t] _module
end


(* external make : (('impl provider_init_arg -> t)[@bs.ignore ]) = "web3-eth" *)

type _ x =
| S :  string -> string x
| F : (int -> unit) x
(* external log :  ('a x [@bs.ignore]) -> 'a -> string = "hello" *)
