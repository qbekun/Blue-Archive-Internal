#pragma once
#include "unitysdk.h"

class UIShiftingCraftMaterialList;
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UISHIFTINGCRAFTEXPENDABLES_AWAKE_OFFSET UNITYSDK_OFFSET(0x23AA810)
#define UISHIFTINGCRAFTEXPENDABLES_SETDATA_OFFSET UNITYSDK_OFFSET(0x23AA8B0)
#define UISHIFTINGCRAFTEXPENDABLES_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x23AAC90)
#define UISHIFTINGCRAFTEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x23AAD30)

	inline static constexpr unsigned int UIShiftingCraftExpendables_TypeDefinitionIndex = 5205;

	class UIShiftingCraftExpendables : public Il2CppObject
	{
	public:
		UIShiftingCraftMaterialList* MaterialList; // 0x98
		::System::Int32 slotCapacity; // 0xA0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTEXPENDABLES_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTEXPENDABLES_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTEXPENDABLES_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

	};

