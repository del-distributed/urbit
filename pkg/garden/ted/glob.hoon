/-  spider, docket
/+  strandio
=,  strand=strand:spider
^-  thread:spider
|=  arg=vase
=/  m  (strand ,vase)
^-  form:m
=+  !<([~ ref=glob-reference:docket base=term] arg)
|^
?-  -.location.ref
  %http  (fetch-http [url.location hash]:ref)
  %ames  !!  ::NOTE  done within docket itself
==
::
++  fetch-http
  |=  [url=cord hash=@uvH]
  ^-  form:m
  ;<  =glob:docket  bind:m
    %+  (retry:strandio ,glob:docket)  `5
    =/  n  (strand ,(unit glob:docket))
    ;<  =cord  bind:n  (fetch-cord:strandio (trip url))
    %-  pure:n
    %-  mole
    |.
    =-  ?>(=(hash (sham -)) -)
    ;;(=glob:docket (cue cord))
  (pure:m !>(glob))
--