#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EmojiEvent; }
namespace MX::Data::Excel { class CombatEmojiExcel&; }

#define MX_DATA_EMOTICONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18BAD80)
#define MX_DATA_EMOTICONDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18BAD90)
#define MX_DATA_EMOTICONDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18BADD0)

namespace MX::Data
{
	inline static constexpr unsigned int EmoticonData_TypeDefinitionIndex = 16059;

	class EmoticonData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMOTICONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMOTICONDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::FlatData::EmojiEvent* arg, ::MX::Data::Excel::CombatEmojiExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::EmojiEvent*, ::MX::Data::Excel::CombatEmojiExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMOTICONDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

