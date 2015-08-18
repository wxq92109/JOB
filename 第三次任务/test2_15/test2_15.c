void ListConcat(LinkList ha,LinkList hb,LinkList &hc)//把链表hb接在ha后面形成链表hc
{
  hc=ha;p=ha;
  while(p->next) p=p->next;
  p->next=hb;
}
