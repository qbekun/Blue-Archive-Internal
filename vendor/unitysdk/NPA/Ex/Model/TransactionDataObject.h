#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_MODEL_TRANSACTIONDATAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3C3F0)

namespace NPA::Ex::Model
{
	inline static constexpr unsigned int TransactionDataObject_TypeDefinitionIndex = 26109;

	class TransactionDataObject : public Il2CppObject
	{
	public:
		::System::String* authorization_code; // 0x10
		::System::String* env_iss_id; // 0x18
		::System::String* concept_id; // 0x20
		::System::String* np_title_id; // 0x28
		::System::String* title_store_id; // 0x30
		::System::String* sandbox; // 0x38
		::System::String* user_collections_id; // 0x40
		::System::String* user_purchase_id; // 0x48
		::System::String* application_id; // 0x50
		::System::String* nsa_id; // 0x58
		::System::String* nsa_id_token; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MODEL_TRANSACTIONDATAOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

