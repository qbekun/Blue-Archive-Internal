#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GETCURRENTMAGNIFICATION_OFFSET UNITYSDK_OFFSET(0x12A8520)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GET_ENDTICK_OFFSET UNITYSDK_OFFSET(0x12A8730)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A8740)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A8BF0)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GET_STARTTICK_OFFSET UNITYSDK_OFFSET(0x12A8DA0)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12A8DB0)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SET_STARTTICK_OFFSET UNITYSDK_OFFSET(0x12A9040)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A8BE0)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12A8DC0)
#define MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SET_ENDTICK_OFFSET UNITYSDK_OFFSET(0x12A9090)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DivideGaugeMagnificationSetting_TypeDefinitionIndex = 14115;

	class DivideGaugeMagnificationSetting : public Il2CppObject
	{
	public:
		::System::Int32 StartTime; // 0x10
		::System::Int32 EndTime; // 0x14
		Il2CppObject* MagnificationList; // 0x18
		::System::Int32 _StartTick_k__BackingField; // 0x20
		::System::Int32 _EndTick_k__BackingField; // 0x24

		Il2CppObject* GetCurrentMagnification(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GETCURRENTMAGNIFICATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_EndTick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GET_ENDTICK_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::DivideGaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_StartTick()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_GET_STARTTICK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_StartTick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SET_STARTTICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_EndTick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DIVIDEGAUGEMAGNIFICATIONSETTING_SET_ENDTICK_OFFSET))(arg, nullptr);
		}

	};
}

