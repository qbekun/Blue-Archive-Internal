#pragma once
#include "../../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_OBJECTMARSHAL_DANGEROUSGETOBJECTDATABYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_OBJECTMARSHAL_DANGEROUSGETOBJECTDATAREFERENCEAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace CommunityToolkit::HighPerformance::Helpers
{
	inline static constexpr unsigned int ObjectMarshal_TypeDefinitionIndex = 37760;

	class ObjectMarshal : public Il2CppObject
	{
	public:
		::System::Int32 DangerousGetObjectDataByteOffset(::System::Object* arg, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_OBJECTMARSHAL_DANGEROUSGETOBJECTDATABYTEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject&* DangerousGetObjectDataReferenceAt(::System::Object* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_OBJECTMARSHAL_DANGEROUSGETOBJECTDATAREFERENCEAT_OFFSET))(arg, arg, nullptr);
		}

	};
}

