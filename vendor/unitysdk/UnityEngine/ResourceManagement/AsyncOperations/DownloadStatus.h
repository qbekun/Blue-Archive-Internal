#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_DOWNLOADSTATUS_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0xA0F1E30)

namespace UnityEngine::ResourceManagement::AsyncOperations
{
	inline static constexpr unsigned int DownloadStatus_TypeDefinitionIndex = 36434;

	class DownloadStatus : public Il2CppObject
	{
	public:
		::System::Int64 TotalBytes; // 0x10
		::System::Int64 DownloadedBytes; // 0x18
		::System::Boolean IsDone; // 0x20

		::System::Single get_Percent()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_DOWNLOADSTATUS_GET_PERCENT_OFFSET))(nullptr);
		}

	};
}

