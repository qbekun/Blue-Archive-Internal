#pragma once
#include "unitysdk.h"

class CampaignTask;

#define <CO_REFRESHSAVEDATA>D__104_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFEFD0)
#define <CO_REFRESHSAVEDATA>D__104_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2005DC0)
#define <CO_REFRESHSAVEDATA>D__104_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2005DD0)
#define <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2005F00)
#define <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2005F10)
#define <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2005F60)

	inline static constexpr unsigned int <Co_RefreshSaveData>d__104_TypeDefinitionIndex = 3114;

	class <Co_RefreshSaveData>d__104 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CampaignTask* __4__this; // 0x20
		::System::Action* callBack; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSAVEDATA>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

