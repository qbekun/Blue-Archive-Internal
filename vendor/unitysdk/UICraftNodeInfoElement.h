#pragma once
#include "unitysdk.h"

class UICraftNodeIcon;
namespace MX::Data { class CraftNodeExcelInfo; }

#define UICRAFTNODEINFOELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2394340)
#define UICRAFTNODEINFOELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2394380)

	inline static constexpr unsigned int UICraftNodeInfoElement_TypeDefinitionIndex = 5163;

	class UICraftNodeInfoElement : public ::System::Xml::Ucs4Decoder2143
	{
	public:
		UICraftNodeIcon* nodeInfo; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINFOELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CraftNodeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODEINFOELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

