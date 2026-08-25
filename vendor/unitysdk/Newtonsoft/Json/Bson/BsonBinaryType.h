#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonBinaryType; }

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryType_TypeDefinitionIndex = 32126;

	class BsonBinaryType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::Newtonsoft::Json::Bson::BsonBinaryType* Binary; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* Function; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* BinaryOld; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* UuidOld; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* Uuid; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* Md5; // 0x0
		::Newtonsoft::Json::Bson::BsonBinaryType* UserDefined; // 0x0

	};
}

