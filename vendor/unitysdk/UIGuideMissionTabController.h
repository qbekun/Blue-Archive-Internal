#pragma once
#include "unitysdk.h"

#define UIGUIDEMISSIONTABCONTROLLER_REFRESHREDDOTS_OFFSET UNITYSDK_OFFSET(0x25C53A0)
#define UIGUIDEMISSIONTABCONTROLLER_INITTABOBJECTS_OFFSET UNITYSDK_OFFSET(0x25C56D0)
#define UIGUIDEMISSIONTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x25CAB00)
#define UIGUIDEMISSIONTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CABC0)

	inline static constexpr unsigned int UIGuideMissionTabController_TypeDefinitionIndex = 6331;

	class UIGuideMissionTabController : public AxisType
	{
	public:
		::System::Void RefreshRedDots(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONTABCONTROLLER_REFRESHREDDOTS_OFFSET))(arg, nullptr);
		}

		::System::Void InitTabObjects(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONTABCONTROLLER_INITTABOBJECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

