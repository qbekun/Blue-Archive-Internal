#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_CRYPTO_OE71E4B430E67093FEA45744B67687B2AE98AC0F19F3730890780C6DC35737E35_GET_KEY_OFFSET UNITYSDK_OFFSET(0x107CFC0)
#define MX_CORE_CRYPTO_OE71E4B430E67093FEA45744B67687B2AE98AC0F19F3730890780C6DC35737E35_.CCTOR_OFFSET UNITYSDK_OFFSET(0x107D0E0)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int Oe71e4b430e67093fea45744b67687b2ae98ac0f19f3730890780c6dc35737e35_TypeDefinitionIndex = 12904;

	class Oe71e4b430e67093fea45744b67687b2ae98ac0f19f3730890780c6dc35737e35 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* part1; // 0x0
		::Il2CppArray<::System::Object*>* part2; // 0x8
		::Il2CppArray<::System::Object*>* part3; // 0x10

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_OE71E4B430E67093FEA45744B67687B2AE98AC0F19F3730890780C6DC35737E35_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_OE71E4B430E67093FEA45744B67687B2AE98AC0F19F3730890780C6DC35737E35_.CCTOR_OFFSET))(nullptr);
		}

	};
}

