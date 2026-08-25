#pragma once
#include "unitysdk.h"

namespace MXField::Actions { class FieldPreventInterplayOverlap; }

#define <PROCESSAFTERINTERPLAY>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEDA40)
#define <PROCESSAFTERINTERPLAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEDB80)
#define <PROCESSAFTERINTERPLAY>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEEDB90)
#define <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEDD30)
#define <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xEEDD40)
#define <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEDD90)

	inline static constexpr unsigned int <ProcessAfterInterplay>d__6_TypeDefinitionIndex = 11068;

	class <ProcessAfterInterplay>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Actions::FieldPreventInterplayOverlap* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAFTERINTERPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

