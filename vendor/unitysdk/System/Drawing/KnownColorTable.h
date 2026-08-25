#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_KNOWNCOLORTABLE_ENSURECOLORTABLE_OFFSET UNITYSDK_OFFSET(0x9804DD0)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_INITCOLORTABLE_OFFSET UNITYSDK_OFFSET(0x9804E20)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_ENSURECOLORNAMETABLE_OFFSET UNITYSDK_OFFSET(0x9805AA0)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_INITCOLORNAMETABLE_OFFSET UNITYSDK_OFFSET(0x9805AF0)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_KNOWNCOLORTOARGB_OFFSET UNITYSDK_OFFSET(0x9809AE0)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_KNOWNCOLORTONAME_OFFSET UNITYSDK_OFFSET(0x9809B70)
#define SYSTEM_DRAWING_KNOWNCOLORTABLE_UPDATESYSTEMCOLORS_OFFSET UNITYSDK_OFFSET(0x9805960)

namespace System::Drawing
{
	inline static constexpr unsigned int KnownColorTable_TypeDefinitionIndex = 37075;

	class KnownColorTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_colorTable; // 0x0
		::Il2CppArray<::System::Object*>* s_colorNameTable; // 0x8

		::System::Void EnsureColorTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_ENSURECOLORTABLE_OFFSET))(nullptr);
		}

		::System::Void InitColorTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_INITCOLORTABLE_OFFSET))(nullptr);
		}

		::System::Void EnsureColorNameTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_ENSURECOLORNAMETABLE_OFFSET))(nullptr);
		}

		::System::Void InitColorNameTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_INITCOLORNAMETABLE_OFFSET))(nullptr);
		}

		::System::Int32 KnownColorToArgb(::System::Drawing::KnownColor* arg)
		{
			return (return (::System::Int32(*)(::System::Drawing::KnownColor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_KNOWNCOLORTOARGB_OFFSET))(arg, nullptr);
		}

		::System::String* KnownColorToName(::System::Drawing::KnownColor* arg)
		{
			return (return (::System::String*(*)(::System::Drawing::KnownColor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_KNOWNCOLORTONAME_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSystemColors(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_KNOWNCOLORTABLE_UPDATESYSTEMCOLORS_OFFSET))(arg, nullptr);
		}

	};
}

