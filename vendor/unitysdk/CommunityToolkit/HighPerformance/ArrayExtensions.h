#pragma once
#include "../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_ARRAYEXTENSIONS_DANGEROUSGETREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_ARRAYEXTENSIONS_DANGEROUSGETREFERENCEAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace CommunityToolkit::HighPerformance
{
	inline static constexpr unsigned int ArrayExtensions_TypeDefinitionIndex = 37757;

	class ArrayExtensions : public Il2CppObject
	{
	public:
		Il2CppObject&* DangerousGetReference(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject&*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_ARRAYEXTENSIONS_DANGEROUSGETREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* DangerousGetReferenceAt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_ARRAYEXTENSIONS_DANGEROUSGETREFERENCEAT_OFFSET))(arg, arg, nullptr);
		}

	};
}

