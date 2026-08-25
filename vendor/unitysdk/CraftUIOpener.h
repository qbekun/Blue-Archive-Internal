#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftType; }
class UICraftDurationList;

#define CRAFTUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0D50)
#define CRAFTUIOPENER_SET_OPENCRAFTTYPE_OFFSET UNITYSDK_OFFSET(0x26C0E40)
#define CRAFTUIOPENER_GET_OPENCRAFTTYPE_OFFSET UNITYSDK_OFFSET(0x26C0E50)
#define CRAFTUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C0E60)
#define CRAFTUIOPENER__OPENUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x26C0E70)
#define CRAFTUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C0E90)

	inline static constexpr unsigned int CraftUIOpener_TypeDefinitionIndex = 6946;

	class CraftUIOpener : public Il2CppObject
	{
	public:
		::MX::Data::CraftType* _OpenCraftType_k__BackingField; // 0x18

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void set_OpenCraftType(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER_SET_OPENCRAFTTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::CraftType* get_OpenCraftType()
		{
			return ((::MX::Data::CraftType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER_GET_OPENCRAFTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__6_0(UICraftDurationList* arg)
		{
			((::System::Void(*)(UICraftDurationList*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER__OPENUI_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

