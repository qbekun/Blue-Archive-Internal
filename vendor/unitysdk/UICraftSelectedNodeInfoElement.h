#pragma once
#include "unitysdk.h"

class UICraftNodeIcon;
namespace MX::Data { class CraftNodeExcelInfo; }

#define UICRAFTSELECTEDNODEINFOELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2396850)
#define UICRAFTSELECTEDNODEINFOELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2396A70)

	inline static constexpr unsigned int UICraftSelectedNodeInfoElement_TypeDefinitionIndex = 5170;

	class UICraftSelectedNodeInfoElement : public ::System::Xml::Ucs4Decoder2143
	{
	public:
		UICraftNodeIcon* nodeInfo; // 0x28

		::System::Void SetData(::MX::Data::CraftNodeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSELECTEDNODEINFOELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSELECTEDNODEINFOELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

