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
#include "JSPerformanceResourceTiming.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertNumbers.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "JSPerformanceServerTiming.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/ObjectConstructor.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>

namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsPerformanceResourceTimingPrototypeFunction_toJSON);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTimingConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_initiatorType);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_nextHopProtocol);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_workerStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_redirectStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_redirectEnd);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_fetchStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_domainLookupStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_domainLookupEnd);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_connectStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_connectEnd);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_secureConnectionStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_requestStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_responseStart);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_responseEnd);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_transferSize);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_encodedBodySize);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_decodedBodySize);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceResourceTiming_serverTiming);

class JSPerformanceResourceTimingPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSPerformanceResourceTimingPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceResourceTimingPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceResourceTimingPrototype>(vm)) JSPerformanceResourceTimingPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceResourceTimingPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSPerformanceResourceTimingPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceResourceTimingPrototype, JSPerformanceResourceTimingPrototype::Base);

using JSPerformanceResourceTimingDOMConstructor = JSDOMConstructorNotConstructable<JSPerformanceResourceTiming>;

template<> const ClassInfo JSPerformanceResourceTimingDOMConstructor::s_info = { "PerformanceResourceTiming"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceResourceTimingDOMConstructor) };

template<> JSValue JSPerformanceResourceTimingDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSPerformanceEntry::getConstructor(vm, &globalObject);
}

template<> void JSPerformanceResourceTimingDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "PerformanceResourceTiming"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSPerformanceResourceTiming::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSPerformanceResourceTimingPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTimingConstructor, 0 } },
    { "initiatorType"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_initiatorType, 0 } },
    { "nextHopProtocol"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_nextHopProtocol, 0 } },
    { "workerStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_workerStart, 0 } },
    { "redirectStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_redirectStart, 0 } },
    { "redirectEnd"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_redirectEnd, 0 } },
    { "fetchStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_fetchStart, 0 } },
    { "domainLookupStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_domainLookupStart, 0 } },
    { "domainLookupEnd"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_domainLookupEnd, 0 } },
    { "connectStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_connectStart, 0 } },
    { "connectEnd"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_connectEnd, 0 } },
    { "secureConnectionStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_secureConnectionStart, 0 } },
    { "requestStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_requestStart, 0 } },
    { "responseStart"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_responseStart, 0 } },
    { "responseEnd"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_responseEnd, 0 } },
    { "transferSize"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_transferSize, 0 } },
    { "encodedBodySize"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_encodedBodySize, 0 } },
    { "decodedBodySize"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_decodedBodySize, 0 } },
    { "serverTiming"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceResourceTiming_serverTiming, 0 } },
    { "toJSON"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformanceResourceTimingPrototypeFunction_toJSON, 0 } },
};

const ClassInfo JSPerformanceResourceTimingPrototype::s_info = { "PerformanceResourceTiming"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceResourceTimingPrototype) };

void JSPerformanceResourceTimingPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSPerformanceResourceTiming::info(), JSPerformanceResourceTimingPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSPerformanceResourceTiming::s_info = { "PerformanceResourceTiming"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceResourceTiming) };

JSPerformanceResourceTiming::JSPerformanceResourceTiming(Structure* structure, JSDOMGlobalObject& globalObject, Ref<PerformanceResourceTiming>&& impl)
    : JSPerformanceEntry(structure, globalObject, WTFMove(impl))
{
}

Ref<PerformanceResourceTiming> JSPerformanceResourceTiming::protectedWrapped() const
{
    return wrapped();
}

// static_assert(!std::is_base_of<ActiveDOMObject, PerformanceResourceTiming>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

JSObject* JSPerformanceResourceTiming::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSPerformanceResourceTimingPrototype::createStructure(vm, &globalObject, JSPerformanceEntry::prototype(vm, globalObject));
    structure->setMayBePrototype(true);
    return JSPerformanceResourceTimingPrototype::create(vm, &globalObject, structure);
}

JSObject* JSPerformanceResourceTiming::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSPerformanceResourceTiming>(vm, globalObject);
}

JSValue JSPerformanceResourceTiming::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPerformanceResourceTimingDOMConstructor, DOMConstructorID::PerformanceResourceTiming>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTimingConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSPerformanceResourceTimingPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSPerformanceResourceTiming::getConstructor(vm, prototype->globalObject()));
}

static inline JSValue jsPerformanceResourceTiming_initiatorTypeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.initiatorType())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_initiatorType, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_initiatorTypeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_nextHopProtocolGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.nextHopProtocol())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_nextHopProtocol, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_nextHopProtocolGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_workerStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.workerStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_workerStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_workerStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_redirectStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.redirectStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_redirectStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_redirectStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_redirectEndGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.redirectEnd())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_redirectEnd, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_redirectEndGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_fetchStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.fetchStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_fetchStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_fetchStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_domainLookupStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.domainLookupStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_domainLookupStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_domainLookupStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_domainLookupEndGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.domainLookupEnd())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_domainLookupEnd, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_domainLookupEndGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_connectStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.connectStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_connectStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_connectStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_connectEndGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.connectEnd())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_connectEnd, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_connectEndGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_secureConnectionStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.secureConnectionStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_secureConnectionStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_secureConnectionStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_requestStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.requestStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_requestStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_requestStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_responseStartGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.responseStart())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_responseStart, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_responseStartGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_responseEndGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.responseEnd())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_responseEnd, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_responseEndGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_transferSizeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLUnsignedLongLong>(lexicalGlobalObject, throwScope, impl.transferSize())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_transferSize, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_transferSizeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_encodedBodySizeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLUnsignedLongLong>(lexicalGlobalObject, throwScope, impl.encodedBodySize())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_encodedBodySize, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_encodedBodySizeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_decodedBodySizeGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLUnsignedLongLong>(lexicalGlobalObject, throwScope, impl.decodedBodySize())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_decodedBodySize, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_decodedBodySizeGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsPerformanceResourceTiming_serverTimingGetter(JSGlobalObject& lexicalGlobalObject, JSPerformanceResourceTiming& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLFrozenArray<IDLInterface<PerformanceServerTiming>>>(lexicalGlobalObject, *thisObject.globalObject(), throwScope, impl.serverTiming())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceResourceTiming_serverTiming, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformanceResourceTiming>::get<jsPerformanceResourceTiming_serverTimingGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline EncodedJSValue jsPerformanceResourceTimingPrototypeFunction_toJSONBody(JSGlobalObject* lexicalGlobalObject, CallFrame*, JSPerformanceResourceTiming* castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    auto* result = constructEmptyObject(lexicalGlobalObject);
    auto nameValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.name());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "name"_s), nameValue);
    auto entryTypeValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.entryType());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "entryType"_s), entryTypeValue);
    auto startTimeValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.startTime());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "startTime"_s), startTimeValue);
    auto durationValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.duration());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "duration"_s), durationValue);
    auto initiatorTypeValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.initiatorType());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "initiatorType"_s), initiatorTypeValue);
    auto nextHopProtocolValue = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.nextHopProtocol());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "nextHopProtocol"_s), nextHopProtocolValue);
    auto workerStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.workerStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "workerStart"_s), workerStartValue);
    auto redirectStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.redirectStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "redirectStart"_s), redirectStartValue);
    auto redirectEndValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.redirectEnd());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "redirectEnd"_s), redirectEndValue);
    auto fetchStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.fetchStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "fetchStart"_s), fetchStartValue);
    auto domainLookupStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.domainLookupStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "domainLookupStart"_s), domainLookupStartValue);
    auto domainLookupEndValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.domainLookupEnd());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "domainLookupEnd"_s), domainLookupEndValue);
    auto connectStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.connectStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "connectStart"_s), connectStartValue);
    auto connectEndValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.connectEnd());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "connectEnd"_s), connectEndValue);
    auto secureConnectionStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.secureConnectionStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "secureConnectionStart"_s), secureConnectionStartValue);
    auto requestStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.requestStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "requestStart"_s), requestStartValue);
    auto responseStartValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.responseStart());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "responseStart"_s), responseStartValue);
    auto responseEndValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.responseEnd());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "responseEnd"_s), responseEndValue);
    auto transferSizeValue = toJS<IDLUnsignedLongLong>(*lexicalGlobalObject, throwScope, impl.transferSize());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "transferSize"_s), transferSizeValue);
    auto encodedBodySizeValue = toJS<IDLUnsignedLongLong>(*lexicalGlobalObject, throwScope, impl.encodedBodySize());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "encodedBodySize"_s), encodedBodySizeValue);
    auto decodedBodySizeValue = toJS<IDLUnsignedLongLong>(*lexicalGlobalObject, throwScope, impl.decodedBodySize());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "decodedBodySize"_s), decodedBodySizeValue);
    auto serverTimingValue = toJS<IDLFrozenArray<IDLInterface<PerformanceServerTiming>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.serverTiming());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "serverTiming"_s), serverTimingValue);
    return JSValue::encode(result);
}

JSC_DEFINE_HOST_FUNCTION(jsPerformanceResourceTimingPrototypeFunction_toJSON, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformanceResourceTiming>::call<jsPerformanceResourceTimingPrototypeFunction_toJSONBody>(*lexicalGlobalObject, *callFrame, "toJSON");
}

JSC::GCClient::IsoSubspace* JSPerformanceResourceTiming::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSPerformanceResourceTiming, UseCustomHeapCellType::No>(vm, [](auto& spaces) { return spaces.m_clientSubspaceForPerformanceResourceTiming.get(); }, [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForPerformanceResourceTiming = std::forward<decltype(space)>(space); }, [](auto& spaces) { return spaces.m_subspaceForPerformanceResourceTiming.get(); }, [](auto& spaces, auto&& space) { spaces.m_subspaceForPerformanceResourceTiming = std::forward<decltype(space)>(space); });
}

void JSPerformanceResourceTiming::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSPerformanceResourceTiming*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

}