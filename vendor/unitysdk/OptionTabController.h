#pragma once
#include "unitysdk.h"

class UIDragScrollView;
namespace MX::SaveData { class OptionTab; }

#define OPTIONTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2724EE0)
#define OPTIONTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2724F20)

	inline static constexpr unsigned int OptionTabController_TypeDefinitionIndex = 7170;

	class OptionTabController : public ::MS::Internal::Xml::XPath::BaseAxisQuery
	{
	public:
		UIDragScrollView* _dragScrollView; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::MX::SaveData::OptionTab* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MX::SaveData::OptionTab*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

