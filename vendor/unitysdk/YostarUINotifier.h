#pragma once
#include "unitysdk.h"

#define YOSTARUINOTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F2790)
#define YOSTARUINOTIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20F27A0)
#define YOSTARUINOTIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20F2870)
#define YOSTARUINOTIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20F2970)
#define YOSTARUINOTIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20F2A40)

	inline static constexpr unsigned int YostarUINotifier_TypeDefinitionIndex = 3816;

	class YostarUINotifier : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YOSTARUINOTIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YOSTARUINOTIFIER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YOSTARUINOTIFIER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YOSTARUINOTIFIER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YOSTARUINOTIFIER_ONDISABLE_OFFSET))(nullptr);
		}

	};

