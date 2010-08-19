/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/iterator.h>
#include <php/classes/splobjectstorage.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/splobjectstorage.php line 12 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_splobjectstorage
Variant c_splobjectstorage::os_getInit(CStrRef s) {
  DECLARE_SYSTEM_GLOBALS(g);
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_RETURN_NAMSTR(0x4B27521443880CAELL, NAMSTR(s_sys_ss43880cae, "index"),
                         0LL, 5);
      break;
    case 3:
      HASH_RETURN_NAMSTR(0x17AC96477E2B6DC3LL, NAMSTR(s_sys_ss7e2b6dc3, "storage"),
                         SystemScalarArrays::ssa_[0], 7);
      break;
    default:
      break;
  }
  return c_ObjectData::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_splobjectstorage
Variant c_splobjectstorage::os_get(CStrRef s) {
  return c_ObjectData::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_splobjectstorage
Variant &c_splobjectstorage::os_lval(CStrRef s) {
  return c_ObjectData::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_splobjectstorage
void c_splobjectstorage::o_getArray(Array &props) const {
  if (isInitialized(m_storage)) props.set(NAMSTR(s_sys_ss3d348351, "\000SplObjectStorage\000storage"), m_storage.isReferenced() ? ref(m_storage) : m_storage, 0x02EA30ECC2CB7CAFLL, true);
  props.set(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"), m_index, 0x28E9D10CCAD01E3ALL, true);
  c_ObjectData::o_getArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_splobjectstorage
void c_splobjectstorage::o_setArray(CArrRef props) {
  props->load(NAMSTR(s_sys_ss3d348351, "\000SplObjectStorage\000storage"), m_storage);
  if (props->exists(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"))) m_index = props->get(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"));
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_splobjectstorage
Variant c_splobjectstorage::o_get(CStrRef prop, bool error, CStrRef context) {
  CStrRef s = context.isNull() ? FrameInjection::GetClassName(false) : context;
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_GUARD_STRING(0x5BA243B9FBA7A64FLL, SplObjectStorage) { return o_getPrivate(prop, error); }
      break;
    default:
      break;
  }
  return o_getPublic(prop, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_PUBLIC_splobjectstorage
Variant c_splobjectstorage::o_getPublic(CStrRef s, bool error) {
  return c_ObjectData::o_getPublic(s, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_PRIVATE_splobjectstorage
Variant c_splobjectstorage::o_getPrivate(CStrRef s, bool error) {
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_RETURN_NAMSTR(0x4B27521443880CAELL, s_sys_ss43880cae, m_index,
                         5);
      break;
    case 3:
      HASH_RETURN_NAMSTR(0x17AC96477E2B6DC3LL, s_sys_ss7e2b6dc3, m_storage,
                         7);
      break;
    default:
      break;
  }
  return o_getPublic(s, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_splobjectstorage
bool c_splobjectstorage::o_exists(CStrRef prop, CStrRef context) const {
  CStrRef s = context.isNull() ? FrameInjection::GetClassName(false) : context;
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_GUARD_STRING(0x5BA243B9FBA7A64FLL, SplObjectStorage) { return o_existsPrivate(prop); }
      break;
    default:
      break;
  }
  return o_existsPublic(prop);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_splobjectstorage
bool c_splobjectstorage::o_existsPublic(CStrRef s) const {
  return c_ObjectData::o_existsPublic(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_splobjectstorage
bool c_splobjectstorage::o_existsPrivate(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_EXISTS_STRING(0x4B27521443880CAELL, "index", 5);
      break;
    case 3:
      HASH_EXISTS_STRING(0x17AC96477E2B6DC3LL, "storage", 7);
      break;
    default:
      break;
  }
  return o_existsPublic(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_splobjectstorage
Variant c_splobjectstorage::o_set(CStrRef prop, CVarRef v, bool forInit, CStrRef context) {
  CStrRef s = context.isNull() ? FrameInjection::GetClassName(false) : context;
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_GUARD_STRING(0x5BA243B9FBA7A64FLL, SplObjectStorage) { return o_setPrivate(prop, v, forInit); }
      break;
    default:
      break;
  }
  return o_setPublic(prop, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_PUBLIC_splobjectstorage
Variant c_splobjectstorage::o_setPublic(CStrRef s, CVarRef v, bool forInit) {
  return c_ObjectData::o_setPublic(s, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_PRIVATE_splobjectstorage
Variant c_splobjectstorage::o_setPrivate(CStrRef s, CVarRef v, bool forInit) {
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_SET_STRING(0x4B27521443880CAELL, m_index,
                      "index", 5);
      break;
    case 3:
      HASH_SET_STRING(0x17AC96477E2B6DC3LL, m_storage,
                      "storage", 7);
      break;
    default:
      break;
  }
  return o_setPublic(s, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_splobjectstorage
Variant& c_splobjectstorage::o_lval(CStrRef prop, CStrRef context) {
  CStrRef s = context.isNull() ? FrameInjection::GetClassName(false) : context;
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_GUARD_STRING(0x5BA243B9FBA7A64FLL, SplObjectStorage) { return o_lvalPrivate(prop); }
      break;
    default:
      break;
  }
  return o_lvalPublic(prop);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_splobjectstorage
Variant& c_splobjectstorage::o_lvalPublic(CStrRef s) {
  return c_ObjectData::o_lvalPublic(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_splobjectstorage
Variant& c_splobjectstorage::o_lvalPrivate(CStrRef s) {
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_RETURN_NAMSTR(0x17AC96477E2B6DC3LL, s_sys_ss7e2b6dc3, m_storage,
                         7);
      break;
    default:
      break;
  }
  return o_lvalPublic(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_splobjectstorage
Variant c_splobjectstorage::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_splobjectstorage
IMPLEMENT_CLASS(splobjectstorage)
ObjectData *c_splobjectstorage::cloneImpl() {
  c_splobjectstorage *obj = NEW(c_splobjectstorage)();
  cloneSet(obj);
  return obj;
}
void c_splobjectstorage::cloneSet(c_splobjectstorage *clone) {
  clone->m_storage = m_storage.isReferenced() ? ref(m_storage) : m_storage;
  clone->m_index = m_index;
  ObjectData::cloneSet(clone);
}
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke(MethodIndex methodIndex, const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
#ifndef NOFMCGEN
  switch (methodIndex.m_callIndex) {
    case 0x1:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 0x171:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_detach(arg0), null);
        }
      }
      break;
    case 0x170:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_attach(arg0), null);
        }
      }
      break;
    case 0xf:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        return (t_count());
      }
      break;
    case 0x2:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 0x3:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 0x172:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_contains(arg0));
        }
      }
      break;
    case 0x7:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        return (t_current());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_attach(arg0), null);
        }
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        return (t_count());
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_contains(arg0));
        }
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t_detach(arg0), null);
        }
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        return (t_current());
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke(methodIndex, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 hash, int count, CVarRef a0, CVarRef a1, CVarRef a2, CVarRef a3, CVarRef a4, CVarRef a5) {
#ifndef NOFMCGEN
  switch (methodIndex.m_callIndex) {
    case 0x1:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 0x171:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        return (t_detach(a0), null);
      }
      break;
    case 0x170:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        return (t_attach(a0), null);
      }
      break;
    case 0xf:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        return (t_count());
      }
      break;
    case 0x2:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 0x3:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 0x172:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        return (t_contains(a0));
      }
      break;
    case 0x7:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        return (t_current());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        return (t_attach(a0), null);
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        return (t_count());
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        return (t_contains(a0));
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        return (t_detach(a0), null);
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        return (t_current());
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke_few_args(methodIndex, s, hash, count, a0, a1, a2, a3, a4, a5);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_splobjectstorage
Variant c_splobjectstorage::os_invoke(const char *c, MethodIndex methodIndex, const char *s,  CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
#ifndef NOFMCGEN
#else
#endif
  return c_ObjectData::os_invoke(c, methodIndex, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
#ifndef NOFMCGEN
  MethodIndex methodIndex = methodIndexExists(s);
  switch (methodIndex.m_callIndex) {
    case 0x1:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_next(), null);
      }
      break;
    case 0x171:
      if (methodIndex.m_overloadIndex == 0x1) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_detach(a0), null);
      }
      break;
    case 0x170:
      if (methodIndex.m_overloadIndex == 0x1) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_attach(a0), null);
      }
      break;
    case 0xf:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_count());
      }
      break;
    case 0x2:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_key());
      }
      break;
    case 0x3:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_valid());
      }
      break;
    case 0x172:
      if (methodIndex.m_overloadIndex == 0x1) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_contains(a0));
      }
      break;
    case 0x7:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_current());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_rewind(), null);
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_attach(a0), null);
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_count());
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_contains(a0));
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_detach(a0), null);
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_current());
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_splobjectstorage::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
#ifndef NOFMCGEN
  MethodIndex methodIndex = methodIndexExists(s);
#else
#endif
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
struct ObjectStaticCallbacks cw_splobjectstorage = {
  c_splobjectstorage::os_getInit,
  c_splobjectstorage::os_get,
  c_splobjectstorage::os_lval,
  c_splobjectstorage::os_invoke,
  c_splobjectstorage::os_constant,
};
void c_splobjectstorage::init() {
  m_storage = SystemScalarArrays::ssa_[0];
  m_index = 0LL;
}
/* SRC: classes/splobjectstorage.php line 24 */
void c_splobjectstorage::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::rewind);
  x_rewind(toObject(m_storage));
} /* function */
/* SRC: classes/splobjectstorage.php line 37 */
bool c_splobjectstorage::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::valid);
  return !same(x_key(ref(lval(m_storage))), false);
} /* function */
/* SRC: classes/splobjectstorage.php line 50 */
int64 c_splobjectstorage::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::key);
  return m_index;
} /* function */
/* SRC: classes/splobjectstorage.php line 62 */
Variant c_splobjectstorage::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::current);
  return x_current(ref(lval(m_storage)));
} /* function */
/* SRC: classes/splobjectstorage.php line 74 */
void c_splobjectstorage::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::next);
  x_next(ref(lval(m_storage)));
  m_index++;
} /* function */
/* SRC: classes/splobjectstorage.php line 87 */
int c_splobjectstorage::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::count);
  return x_count(m_storage);
} /* function */
/* SRC: classes/splobjectstorage.php line 102 */
bool c_splobjectstorage::t_contains(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::contains);
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin(s_class_name); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          {
            if (same(v_object, v_obj)) {
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
} /* function */
/* SRC: classes/splobjectstorage.php line 124 */
void c_splobjectstorage::t_attach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::attach);
  if ((x_is_object(v_obj) && !(t_contains(v_obj)))) {
    {
      {
        Variant tmp1((v_obj));
        m_storage.append((tmp1));
      }
    }
  }
} /* function */
/* SRC: classes/splobjectstorage.php line 140 */
void c_splobjectstorage::t_detach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::detach);
  Primitive v_idx = 0;
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin(s_class_name); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          v_idx = iter3->first();
          {
            if (same(v_object, v_obj)) {
              {
                lval(m_storage).weakRemove(v_idx);
                o_root_invoke_few_args(/* rewind */ MethodIndex(9, 1) /* rewind */ ,  "rewind", 0x1670096FDE27AF6ALL, 0);
                return;
              }
            }
          }
        }
      }
    }
  }
} /* function */
Object co_splobjectstorage(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_splobjectstorage)())->dynCreate(params, init));
}
Variant pm_php$classes$splobjectstorage_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::classes/splobjectstorage.php, pm_php$classes$splobjectstorage_php);
  LVariableTable *gVariables __attribute__((__unused__)) = (LVariableTable *)g;
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}
