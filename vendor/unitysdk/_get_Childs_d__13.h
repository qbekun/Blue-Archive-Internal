#pragma once
#include "unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::SimpleJSON { class JSONArray; }

#define <GET_CHILDS>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCFC90)
#define <GET_CHILDS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CD0140)
#define <GET_CHILDS>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9CD01A0)
#define <GET_CHILDS>D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9CD03B0)
#define <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NPA.SIMPLEJSON.JSONNODE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9CD0400)
#define <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9CD0410)
#define <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9CD0460)
#define <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NPA.SIMPLEJSON.JSONNODE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9CD0470)
#define <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9CD0510)

	inline static constexpr unsigned int <get_Childs>d__13_TypeDefinitionIndex = 27421;

	class <get_Childs>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::NPA::SimpleJSON::JSONNode* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::NPA::SimpleJSON::JSONArray* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13___M__FINALLY1_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* System.Collections.Generic.IEnumerator_NPA.SimpleJSON.JSONNode_.get_Current()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_NPA.SIMPLEJSON.JSONNODE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_NPA.SimpleJSON.JSONNode_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_NPA.SIMPLEJSON.JSONNODE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CHILDS>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

