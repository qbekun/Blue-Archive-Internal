#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define <ANNOTATIONS>D__186_.CTOR_OFFSET UNITYSDK_OFFSET(0x9516400)
#define <ANNOTATIONS>D__186_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9516BD0)
#define <ANNOTATIONS>D__186_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9516BE0)
#define <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9516DF0)
#define <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9516E00)
#define <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9516E50)
#define <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.OBJECT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9516E60)
#define <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9516F10)

	inline static constexpr unsigned int <Annotations>d__186_TypeDefinitionIndex = 32045;

	class <Annotations>d__186 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Type* type; // 0x28
		::System::Type* __3__type; // 0x30
		::Newtonsoft::Json::Linq::JToken* __4__this; // 0x38
		::Il2CppArray<::System::Object*>* _annotations_5__2; // 0x40
		::System::Int32 _i_5__3; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Object_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.OBJECT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANNOTATIONS>D__186_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

