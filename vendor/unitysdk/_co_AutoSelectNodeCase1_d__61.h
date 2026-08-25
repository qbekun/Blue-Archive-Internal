#pragma once
#include "unitysdk.h"

class UICraftDuration;

#define <CO_AUTOSELECTNODECASE1>D__61_.CTOR_OFFSET UNITYSDK_OFFSET(0x23867F0)
#define <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x238A410)
#define <CO_AUTOSELECTNODECASE1>D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x238A420)
#define <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238A8E0)
#define <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x238A8F0)
#define <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238A940)

	inline static constexpr unsigned int <co_AutoSelectNodeCase1>d__61_TypeDefinitionIndex = 5132;

	class <co_AutoSelectNodeCase1>d__61 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftDuration* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE1>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

