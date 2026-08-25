#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define <BEFORESELF>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0x950BB90)
#define <BEFORESELF>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9516F20)
#define <BEFORESELF>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9516F30)
#define <BEFORESELF>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9517000)
#define <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9517010)
#define <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9517060)
#define <BEFORESELF>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9517070)
#define <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9517110)

	inline static constexpr unsigned int <BeforeSelf>d__50_TypeDefinitionIndex = 32046;

	class <BeforeSelf>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Newtonsoft::Json::Linq::JToken* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::Newtonsoft::Json::Linq::JToken* __4__this; // 0x28
		::Newtonsoft::Json::Linq::JToken* _o_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* System.Collections.Generic.IEnumerator_Newtonsoft.Json.Linq.JToken_.get_Current()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Newtonsoft.Json.Linq.JToken_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NEWTONSOFT.JSON.LINQ.JTOKEN_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BEFORESELF>D__50_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

