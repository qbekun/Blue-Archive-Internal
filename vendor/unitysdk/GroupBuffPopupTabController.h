#pragma once
#include "unitysdk.h"

namespace FlatData { class WeekDungeonType; }

#define GROUPBUFFPOPUPTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBFC90)
#define GROUPBUFFPOPUPTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xBBFCD0)

	inline static constexpr unsigned int GroupBuffPopupTabController_TypeDefinitionIndex = 8617;

	class GroupBuffPopupTabController : public ::MS::Internal::Xml::XPath::ContextQuery
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFPOPUPTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::WeekDungeonType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFPOPUPTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

