#pragma once
#include "unitysdk.h"

class MissionObject;
class GuideMissionSeasonListNetworkTask;

#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8CD0)
#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBC4F0)
#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EBC500)
#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBC590)
#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1EBC5A0)
#define <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBC5F0)

	inline static constexpr unsigned int <Co_RequestGuideMissionSeasons>d__41_TypeDefinitionIndex = 1737;

	class <Co_RequestGuideMissionSeasons>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		MissionObject* __4__this; // 0x20
		::System::Boolean showToast; // 0x28
		GuideMissionSeasonListNetworkTask* _task_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTGUIDEMISSIONSEASONS>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

