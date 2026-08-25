#pragma once
#include "unitysdk.h"

#define UIACADEMYLOCATIONRANKINFOLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21B84B0)
#define UIACADEMYLOCATIONRANKINFOLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B8570)

	inline static constexpr unsigned int UIAcademyLocationRankInfoList_TypeDefinitionIndex = 4204;

	class UIAcademyLocationRankInfoList : public ::System::Xml::XmlDocument
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOLIST_.CTOR_OFFSET))(nullptr);
		}

	};

