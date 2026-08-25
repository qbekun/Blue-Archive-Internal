#pragma once
#include "unitysdk.h"

#define TAPTIC_FAILURE_OFFSET UNITYSDK_OFFSET(0xA13440)
#define TAPTIC_MEDIUM_OFFSET UNITYSDK_OFFSET(0xA13540)
#define TAPTIC_IPHONE6S_OFFSET UNITYSDK_OFFSET(0xA137C0)
#define TAPTIC_WARNING_OFFSET UNITYSDK_OFFSET(0xA133C0)
#define TAPTIC_LIGHT_OFFSET UNITYSDK_OFFSET(0xA134C0)
#define TAPTIC_SUCCESS_OFFSET UNITYSDK_OFFSET(0xA13340)
#define TAPTIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xA13830)
#define TAPTIC_SELECTION_OFFSET UNITYSDK_OFFSET(0xA13740)
#define TAPTIC_DEFAULT_OFFSET UNITYSDK_OFFSET(0xA13640)
#define TAPTIC_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA13840)
#define TAPTIC_HEAVY_OFFSET UNITYSDK_OFFSET(0xA135C0)
#define TAPTIC_VIBRATE_OFFSET UNITYSDK_OFFSET(0xA136C0)

	inline static constexpr unsigned int Taptic_TypeDefinitionIndex = 36571;

	class Taptic : public Il2CppObject
	{
	public:
		::System::Boolean tapticOn; // 0x0

		::System::Void Failure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_FAILURE_OFFSET))(nullptr);
		}

		::System::Void Medium()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_MEDIUM_OFFSET))(nullptr);
		}

		::System::Boolean iPhone6s()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_IPHONE6S_OFFSET))(nullptr);
		}

		::System::Void Warning()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_WARNING_OFFSET))(nullptr);
		}

		::System::Void Light()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_LIGHT_OFFSET))(nullptr);
		}

		::System::Void Success()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_SUCCESS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Selection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_SELECTION_OFFSET))(nullptr);
		}

		::System::Void Default()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Heavy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_HEAVY_OFFSET))(nullptr);
		}

		::System::Void Vibrate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTIC_VIBRATE_OFFSET))(nullptr);
		}

	};

