#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftType; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define CRAFTSHIFTINGUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C0EB0)
#define CRAFTSHIFTINGUIOPENER_SET_OPENCRAFTTYPE_OFFSET UNITYSDK_OFFSET(0x26C0EC0)
#define CRAFTSHIFTINGUIOPENER_GET_SHIFTINGCRAFTRECIPEINFO_OFFSET UNITYSDK_OFFSET(0x26C0ED0)
#define CRAFTSHIFTINGUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0EE0)
#define CRAFTSHIFTINGUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C16C0)
#define CRAFTSHIFTINGUIOPENER_GET_OPENCRAFTTYPE_OFFSET UNITYSDK_OFFSET(0x26C1700)
#define CRAFTSHIFTINGUIOPENER_SET_SHIFTINGCRAFTRECIPEINFO_OFFSET UNITYSDK_OFFSET(0x26C1710)

	inline static constexpr unsigned int CraftShiftingUIOpener_TypeDefinitionIndex = 6949;

	class CraftShiftingUIOpener : public Il2CppObject
	{
	public:
		::MX::Data::CraftType* _OpenCraftType_k__BackingField; // 0x18
		::MX::Data::ShiftingCraftRecipeExcelInfo* _ShiftingCraftRecipeInfo_k__BackingField; // 0x20

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void set_OpenCraftType(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_SET_OPENCRAFTTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::ShiftingCraftRecipeExcelInfo* get_ShiftingCraftRecipeInfo()
		{
			return ((::MX::Data::ShiftingCraftRecipeExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_GET_SHIFTINGCRAFTRECIPEINFO_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::CraftType* arg, ::MX::Data::ShiftingCraftRecipeExcelInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::CraftType* get_OpenCraftType()
		{
			return ((::MX::Data::CraftType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_GET_OPENCRAFTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShiftingCraftRecipeInfo(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGUIOPENER_SET_SHIFTINGCRAFTRECIPEINFO_OFFSET))(arg, nullptr);
		}

	};

