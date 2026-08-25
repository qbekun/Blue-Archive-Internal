#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_RESOURCEREQUEST_GETRESULT_OFFSET UNITYSDK_OFFSET(0xA22D1C0)
#define UNITYENGINE_RESOURCEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0xA22D2E0)
#define UNITYENGINE_RESOURCEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22D300)

namespace UnityEngine
{
	inline static constexpr unsigned int ResourceRequest_TypeDefinitionIndex = 31126;

	class ResourceRequest : public ::Unity::Burst::BurstRuntime
	{
	public:
		::System::String* m_Path; // 0x20
		::System::Type* m_Type; // 0x28

		::UnityEngine::Object* GetResult()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST_GETRESULT_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_asset()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

