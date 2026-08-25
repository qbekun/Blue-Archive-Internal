#pragma once
#include "unitysdk.h"

#define RAIDDECKLISTSCROLLVIEWCONTROLLER_OPENPRESET_OFFSET UNITYSDK_OFFSET(0x2785610)
#define RAIDDECKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27857A0)

	inline static constexpr unsigned int RaidDeckListScrollViewController_TypeDefinitionIndex = 7395;

	class RaidDeckListScrollViewController : public ::System::Xml::XmlNodeChangedEventArgs
	{
	public:
		::System::Void OpenPreset(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWCONTROLLER_OPENPRESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

