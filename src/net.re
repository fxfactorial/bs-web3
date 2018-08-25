type t;
[@bs.send] external getId : t => Js.Promise.t(int) = "";
