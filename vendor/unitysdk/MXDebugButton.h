#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RaycastHit; }

#define MXDEBUGBUTTON_INITEVENT_OFFSET UNITYSDK_OFFSET(0x2059BB0)
#define MXDEBUGBUTTON_ISTOUCHDOWNTHIS_OFFSET UNITYSDK_OFFSET(0x2059BC0)
#define MXDEBUGBUTTON__ISTOUCHDOWNTHIS_B__4_0_OFFSET UNITYSDK_OFFSET(0x2059D50)
#define MXDEBUGBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x2059DD0)
#define MXDEBUGBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2059E30)

	inline static constexpr unsigned int MXDebugButton_TypeDefinitionIndex = 3356;

	class MXDebugButton : public Il2CppObject
	{
	public:
		::System::Boolean touchDownThis; // 0x18
		::System::Action* action; // 0x20

		::System::Void InitEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXDEBUGBUTTON_INITEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTouchDownThis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDEBUGBUTTON_ISTOUCHDOWNTHIS_OFFSET))(nullptr);
		}

		::System::Boolean _IsTouchDownThis_b__4_0(::UnityEngine::RaycastHit* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::RaycastHit*, ::PVOID))((::PBYTE)hIl2Cpp + MXDEBUGBUTTON__ISTOUCHDOWNTHIS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDEBUGBUTTON_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXDEBUGBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};

