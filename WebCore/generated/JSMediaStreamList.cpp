/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(MEDIA_STREAM)

#include "JSMediaStreamList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMediaStream.h"
#include "MediaStream.h"
#include "MediaStreamList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMediaStreamList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamListTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamListTable = { 5, 3, JSMediaStreamListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamListConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamListConstructorTable = { 1, 0, JSMediaStreamListConstructorTableValues, 0 };
class JSMediaStreamListConstructor : public DOMConstructorObject {
private:
    JSMediaStreamListConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamListConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamListConstructor* ptr = new (JSC::allocateCell<JSMediaStreamListConstructor>(*exec->heap())) JSMediaStreamListConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSMediaStreamListConstructor::s_info = { "MediaStreamListConstructor", &DOMConstructorObject::s_info, &JSMediaStreamListConstructorTable, 0 };

JSMediaStreamListConstructor::JSMediaStreamListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamListConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSMediaStreamListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSMediaStreamListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaStreamListConstructor, JSDOMWrapper>(exec, &JSMediaStreamListConstructorTable, this, propertyName, slot);
}

bool JSMediaStreamListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMediaStreamListConstructor, JSDOMWrapper>(exec, &JSMediaStreamListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMediaStreamListPrototypeTableValues[] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsMediaStreamListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMediaStreamListPrototypeTable = { 2, 1, JSMediaStreamListPrototypeTableValues, 0 };
const ClassInfo JSMediaStreamListPrototype::s_info = { "MediaStreamListPrototype", &JSC::JSNonFinalObject::s_info, &JSMediaStreamListPrototypeTable, 0 };

JSObject* JSMediaStreamListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamList>(exec, globalObject);
}

bool JSMediaStreamListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSMediaStreamListPrototypeTable, this, propertyName, slot);
}

bool JSMediaStreamListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSMediaStreamListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSMediaStreamList::s_info = { "MediaStreamList", &JSDOMWrapper::s_info, &JSMediaStreamListTable, 0 };

JSMediaStreamList::JSMediaStreamList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSMediaStreamList::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSMediaStreamList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMediaStreamListPrototype::create(exec->globalData(), globalObject, JSMediaStreamListPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSMediaStreamList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSMediaStreamListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<MediaStreamList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSMediaStreamList, Base>(exec, &JSMediaStreamListTable, this, propertyName, slot);
}

bool JSMediaStreamList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    const HashEntry* entry = JSMediaStreamListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<MediaStreamList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSMediaStreamList, Base>(exec, &JSMediaStreamListTable, this, propertyName, descriptor);
}

bool JSMediaStreamList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    if (propertyName < static_cast<MediaStreamList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsMediaStreamListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaStreamList* castedThis = static_cast<JSMediaStreamList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStreamList* imp = static_cast<MediaStreamList*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsMediaStreamListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMediaStreamList* domObject = static_cast<JSMediaStreamList*>(asObject(slotBase));
    return JSMediaStreamList::getConstructor(exec, domObject->globalObject());
}

void JSMediaStreamList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    for (unsigned i = 0; i < static_cast<MediaStreamList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSMediaStreamList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSMediaStreamList::s_info))
        return throwVMTypeError(exec);
    JSMediaStreamList* castedThis = static_cast<JSMediaStreamList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSMediaStreamList::s_info);
    MediaStreamList* imp = static_cast<MediaStreamList*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSMediaStreamList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSMediaStreamList* thisObj = static_cast<JSMediaStreamList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<MediaStreamList*>(thisObj->impl())->item(index));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaStreamList* impl)
{
    return wrap<JSMediaStreamList>(exec, globalObject, impl);
}

MediaStreamList* toMediaStreamList(JSC::JSValue value)
{
    return value.inherits(&JSMediaStreamList::s_info) ? static_cast<JSMediaStreamList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_STREAM)
