#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class ArraySliceFilter; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }
namespace Newtonsoft::Json::Linq { class JArray; }

#define <EXECUTEFILTER>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0x95213F0)
#define <EXECUTEFILTER>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9521450)
#define <EXECUTEFILTER>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9521510)
#define <EXECUTEFILTER>D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9522020)
#define <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x95220D0)
#define <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x95220E0)
#define <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9522130)
#define <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9522140)
#define <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9522200)

	inline static constexpr unsigned int <ExecuteFilter>d__12_TypeDefinitionIndex = 32063;

	class <ExecuteFilter>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* __4__this; // 0x28
		Il2CppObject* current; // 0x30
		Il2CppObject* __3__current; // 0x38
		::Newtonsoft::Json::Linq::JsonSelectSettings* settings; // 0x40
		::Newtonsoft::Json::Linq::JsonSelectSettings* __3__settings; // 0x48
		Il2CppObject* __7__wrap1; // 0x50
		::Newtonsoft::Json::Linq::JArray* _a_5__3; // 0x58
		::System::Int32 _stepCount_5__4; // 0x60
		::System::Int32 _stopIndex_5__5; // 0x64
		::System::Boolean _positiveStep_5__6; // 0x68
		::System::Int32 _i_5__7; // 0x6C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12___M__FINALLY1_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* System.Collections.Generic.IEnumerator_Newtonsoft.Json.Linq.JToken_.get_Current()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Newtonsoft.Json.Linq.JToken_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEFILTER>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

