#include "all.h"

u3_noun
u3qdu_rrbal(u3_noun n_a, u3_noun l_a, u3_noun m_a, u3_noun r_a)
{
  if ( c3n == u3du(l_a) ) {
    return u3m_bail(c3__exit);
  }

  u3_noun p_l_a = u3t(u3t(l_a));

  u3_noun n_p_l_a, l_p_l_a, m_p_l_a, r_p_l_a;

  u3x_qual(p_l_a, &n_p_l_a, &l_p_l_a, &m_p_l_a, &r_p_l_a);

  if ( (c3n == u3du(l_p_l_a)) || (c3n == u3du(r_p_l_a)) ) {
    return u3m_bail(c3__exit);
  }

  u3_atom sl = u3qdu_size(l_p_l_a);
  u3_atom sr = u3qdu_size(r_p_l_a);

  if ( c3y == u3qa_lth(sl, sr) ) {
    return u3qdu_rrsin(u3k(n_a), u3k(l_a), u3k(m_a), u3k(r_a));
  }
  else {
    return u3qdu_rrdub(u3k(n_a), u3k(l_a), u3k(m_a), u3k(r_a));
  }
}

u3_noun
u3wdu_rrbal(u3_noun cor)
{
  u3_noun a;

  if ( (c3n == u3r_mean(cor, u3x_sam, &a, 0 )) ||
       (c3n == u3du(a)) )
  {
    return u3m_bail(c3__exit);
  } else {
    u3_noun n, l, m, r;
    u3x_qual(a, &n, &l, &m, &r);

    if ( (c3n == u3du(n)) || (c3n == u3ud(m)) ) {
      return u3m_bail(c3__exit);
    }
    else {
      return u3qdu_rrbal(n, l, m, r);
    }
  }
}
