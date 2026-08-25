#pragma once
#include "unitysdk.h"

namespace MX::Data { class GroundObstacleDataCollection; }
namespace MX::GameData::Repository { class ReaderConfig; }

#define GROUNDOBSTACLEDATAREPOSITORY_GET_LOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x2154EF0)
#define GROUNDOBSTACLEDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2154F40)
#define GROUNDOBSTACLEDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2155040)
#define GROUNDOBSTACLEDATAREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x21550E0)
#define GROUNDOBSTACLEDATAREPOSITORY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x2155140)
#define GROUNDOBSTACLEDATAREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x2155190)
#define GROUNDOBSTACLEDATAREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x2155280)

	inline static constexpr unsigned int GroundObstacleDataRepository_TypeDefinitionIndex = 3971;

	class GroundObstacleDataRepository : public ::System::Reflection::AssemblyConfigurationAttribute
	{
	public:
		::MX::Data::GroundObstacleDataCollection* _table; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Boolean get_LoadComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_GET_LOADCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::UInt32 arg, ::MX::Data::GroundObstacleData&* arg2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::MX::Data::GroundObstacleData&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Load()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_LOAD_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

	};

