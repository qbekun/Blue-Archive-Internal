#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class MXToggle;
namespace MX::TableBoard { class TBGItemEffectDB; }

#define UITBGREMAINITEMSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB59730)
#define UITBGREMAINITEMSLOT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB59880)
#define UITBGREMAINITEMSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB59890)
#define UITBGREMAINITEMSLOT_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB598A0)
#define UITBGREMAINITEMSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB598B0)

	inline static constexpr unsigned int UITBGRemainItemSlot_TypeDefinitionIndex = 8402;

	class UITBGRemainItemSlot : public Il2CppObject
	{
	public:
		UITexture* ItemIcon; // 0x18
		UILabel* ItemName; // 0x20
		UILabel* ItemDesc; // 0x28
		MXToggle* Toggle; // 0x30
		::System::Int64 _UniqueId_k__BackingField; // 0x38
		::System::Int32 slotIndex; // 0x40

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREMAINITEMSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREMAINITEMSLOT_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREMAINITEMSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREMAINITEMSLOT_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::TableBoard::TBGItemEffectDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREMAINITEMSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

