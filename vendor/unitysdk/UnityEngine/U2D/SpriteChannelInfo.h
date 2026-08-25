#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_U2D_SPRITECHANNELINFO_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0xA2445C0)
#define UNITYENGINE_U2D_SPRITECHANNELINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA2445D0)
#define UNITYENGINE_U2D_SPRITECHANNELINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xA2445E0)
#define UNITYENGINE_U2D_SPRITECHANNELINFO_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0xA2445F0)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteChannelInfo_TypeDefinitionIndex = 31229;

	class SpriteChannelInfo : public Il2CppObject
	{
	public:
		::System::Int32 m_Buffer; // 0x10
		::System::Int32 m_Count; // 0x18
		::System::Int32 m_Offset; // 0x1C
		::System::Int32 m_Stride; // 0x20

		::System::Object** get_buffer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITECHANNELINFO_GET_BUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITECHANNELINFO_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_offset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITECHANNELINFO_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_stride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITECHANNELINFO_GET_STRIDE_OFFSET))(nullptr);
		}

	};
}

