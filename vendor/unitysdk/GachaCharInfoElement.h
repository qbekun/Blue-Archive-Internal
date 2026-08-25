#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::Data { class CharacterData; }
namespace MX::Data::Excel { class CharacterExcel; }

#define GACHACHARINFOELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA723F0)
#define GACHACHARINFOELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xA72050)

	inline static constexpr unsigned int GachaCharInfoElement_TypeDefinitionIndex = 7860;

	class GachaCharInfoElement : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* starObjects; // 0x18
		UILabel* clubLabel; // 0x20
		UILabel* charNameLabel; // 0x28
		UILabel* CVLabel; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACHARINFOELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::Data::CharacterData* arg, ::MX::Data::Excel::CharacterExcel* arg2)
		{
			((::System::Void(*)(::MX::Data::CharacterData*, ::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GACHACHARINFOELEMENT_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

	};

