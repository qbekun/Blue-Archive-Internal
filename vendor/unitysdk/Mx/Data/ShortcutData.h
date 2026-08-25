#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_SHORTCUTDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x195A7C0)
#define MX_DATA_SHORTCUTDATA_ISASCENDING_OFFSET UNITYSDK_OFFSET(0x195A800)
#define MX_DATA_SHORTCUTDATA_ISASCENDING_OFFSET UNITYSDK_OFFSET(0x195A8C0)
#define MX_DATA_SHORTCUTDATA_GETSHORTCUTORDER_OFFSET UNITYSDK_OFFSET(0x195A9E0)
#define MX_DATA_SHORTCUTDATA_GETSHORTCUTORDER_OFFSET UNITYSDK_OFFSET(0x195AC90)
#define MX_DATA_SHORTCUTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195ADE0)
#define MX_DATA_SHORTCUTDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x195ADF0)

namespace MX::Data
{
	inline static constexpr unsigned int ShortcutData_TypeDefinitionIndex = 16403;

	class ShortcutData : public Il2CppObject
	{
	public:
		Il2CppObject* defaultShortcutOrder; // 0x0

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean IsAscending(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_ISASCENDING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAscending(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_ISASCENDING_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetShortcutOrder(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_GETSHORTCUTORDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShortcutOrder(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_GETSHORTCUTORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHORTCUTDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

