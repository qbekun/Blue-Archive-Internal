#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::Campaign { class HexaUnit; }

#define SUPPLIESINFO_CLOSE_OFFSET UNITYSDK_OFFSET(0x2298C00)
#define SUPPLIESINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2298D00)
#define SUPPLIESINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2298D10)
#define SUPPLIESINFO_INITSUPPLIES_OFFSET UNITYSDK_OFFSET(0x2298F10)

	inline static constexpr unsigned int SuppliesInfo_TypeDefinitionIndex = 4722;

	class SuppliesInfo : public Il2CppObject
	{
	public:
		UILabel* Supplies; // 0x18
		MXButton* ButtonX; // 0x20
		MXButton* ButtonOk; // 0x28

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPLIESINFO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPLIESINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPLIESINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitSupplies(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPLIESINFO_INITSUPPLIES_OFFSET))(arg, nullptr);
		}

	};

