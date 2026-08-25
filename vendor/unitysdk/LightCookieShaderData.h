#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LIGHTCOOKIESHADERDATA_SET_ISUPLOADED_OFFSET UNITYSDK_OFFSET(0xA05D3D0)
#define LIGHTCOOKIESHADERDATA_GET_WORLDTOLIGHTS_OFFSET UNITYSDK_OFFSET(0xA05D3E0)
#define LIGHTCOOKIESHADERDATA_UPLOAD_OFFSET UNITYSDK_OFFSET(0xA05D3F0)
#define LIGHTCOOKIESHADERDATA_GET_COOKIEENABLEBITS_OFFSET UNITYSDK_OFFSET(0xA05D5D0)
#define LIGHTCOOKIESHADERDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0xA05D5E0)
#define LIGHTCOOKIESHADERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA05D810)
#define LIGHTCOOKIESHADERDATA_GET_ISUPLOADED_OFFSET UNITYSDK_OFFSET(0xA05D860)
#define LIGHTCOOKIESHADERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA05D870)
#define LIGHTCOOKIESHADERDATA_GET_LIGHTTYPES_OFFSET UNITYSDK_OFFSET(0xA05D920)
#define LIGHTCOOKIESHADERDATA_GET_ATLASUVRECTS_OFFSET UNITYSDK_OFFSET(0xA05D930)
#define LIGHTCOOKIESHADERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05D940)

	inline static constexpr unsigned int LightCookieShaderData_TypeDefinitionIndex = 32656;

	class LightCookieShaderData : public Il2CppObject
	{
	public:
		::System::Int32 m_Size; // 0x10
		::System::Boolean m_UseStructuredBuffer; // 0x14
		::Il2CppArray<::System::Object*>* m_WorldToLightCpuData; // 0x18
		::Il2CppArray<::System::Object*>* m_AtlasUVRectCpuData; // 0x20
		::Il2CppArray<::System::Object*>* m_LightTypeCpuData; // 0x28
		ShaderBitArray* m_CookieEnableBitsCpuData; // 0x30
		::UnityEngine::ComputeBuffer* m_WorldToLightBuffer; // 0x38
		::UnityEngine::ComputeBuffer* m_AtlasUVRectBuffer; // 0x40
		::UnityEngine::ComputeBuffer* m_LightTypeBuffer; // 0x48
		::System::Boolean _isUploaded_k__BackingField; // 0x50

		::System::Void set_isUploaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_SET_ISUPLOADED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldToLights()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_GET_WORLDTOLIGHTS_OFFSET))(nullptr);
		}

		::System::Void Upload(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_UPLOAD_OFFSET))(arg, nullptr);
		}

		ShaderBitArray* get_cookieEnableBits()
		{
			return (return (ShaderBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_GET_COOKIEENABLEBITS_OFFSET))(nullptr);
		}

		::System::Void Resize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_RESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_isUploaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_GET_ISUPLOADED_OFFSET))(nullptr);
		}

		::System::Void Clear(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_CLEAR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_lightTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_GET_LIGHTTYPES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_atlasUVRects()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_GET_ATLASUVRECTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIESHADERDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

