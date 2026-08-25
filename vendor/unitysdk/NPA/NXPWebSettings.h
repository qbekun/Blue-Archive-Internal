#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPInset; }
namespace NPA { class SizeUnit; }

#define NPA_NXPWEBSETTINGS_GET_MARGINS_OFFSET UNITYSDK_OFFSET(0x9BCBB90)
#define NPA_NXPWEBSETTINGS_SET_MARGINS_OFFSET UNITYSDK_OFFSET(0x9BCBBA0)
#define NPA_NXPWEBSETTINGS_GET_TAG_OFFSET UNITYSDK_OFFSET(0x9BCBBB0)
#define NPA_NXPWEBSETTINGS_SET_TAG_OFFSET UNITYSDK_OFFSET(0x9BCBBC0)
#define NPA_NXPWEBSETTINGS_GET_USEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9BCBBD0)
#define NPA_NXPWEBSETTINGS_SET_USEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9BCBBE0)
#define NPA_NXPWEBSETTINGS_GET_SIZEUNIT_OFFSET UNITYSDK_OFFSET(0x9BCBBF0)
#define NPA_NXPWEBSETTINGS_SET_SIZEUNIT_OFFSET UNITYSDK_OFFSET(0x9BCBC00)
#define NPA_NXPWEBSETTINGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCBC10)
#define NPA_NXPWEBSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCBCD0)

namespace NPA
{
	inline static constexpr unsigned int NXPWebSettings_TypeDefinitionIndex = 25649;

	class NXPWebSettings : public Il2CppObject
	{
	public:
		::NPA::NXPInset* margins; // 0x10
		::System::String* tag; // 0x18
		::System::Boolean useProgressBar; // 0x20
		::NPA::SizeUnit* _SizeUnit_k__BackingField; // 0x24

		::NPA::NXPInset* get_Margins()
		{
			return (return (::NPA::NXPInset*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_GET_MARGINS_OFFSET))(nullptr);
		}

		::System::Void set_Margins(::NPA::NXPInset* arg)
		{
			((::System::Void(*)(::NPA::NXPInset*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_SET_MARGINS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_Tag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_SET_TAG_OFFSET))(str, nullptr);
		}

		::System::Boolean get_UseProgressBar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_GET_USEPROGRESSBAR_OFFSET))(nullptr);
		}

		::System::Void set_UseProgressBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_SET_USEPROGRESSBAR_OFFSET))(arg, nullptr);
		}

		::NPA::SizeUnit* get_SizeUnit()
		{
			return (return (::NPA::SizeUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_GET_SIZEUNIT_OFFSET))(nullptr);
		}

		::System::Void set_SizeUnit(::NPA::SizeUnit* arg)
		{
			((::System::Void(*)(::NPA::SizeUnit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_SET_SIZEUNIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEBSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

