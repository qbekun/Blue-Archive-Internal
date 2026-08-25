#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class GroundObstacleData; }

#define MX_DATA_GROUNDOBSTACLEDATACOLLECTION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1849B10)
#define MX_DATA_GROUNDOBSTACLEDATACOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1849BD0)
#define MX_DATA_GROUNDOBSTACLEDATACOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1849BE0)
#define MX_DATA_GROUNDOBSTACLEDATACOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849C00)

namespace MX::Data
{
	inline static constexpr unsigned int GroundObstacleDataCollection_TypeDefinitionIndex = 15834;

	class GroundObstacleDataCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::PushbackStream
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATACOLLECTION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATACOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::UInt32 GetKeyForItem(::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::UInt32(*)(::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATACOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATACOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

