#pragma once
#include "unitysdk.h"

#define DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64C10)
#define DOUBLEBUFFERS_SETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64C40)
#define DOUBLEBUFFERS_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64C20)
#define DOUBLEBUFFERS_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9F64C00)
#define DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64C30)
#define DOUBLEBUFFERS_SWAPBUFFERS_OFFSET UNITYSDK_OFFSET(0x9F64DC0)

	inline static constexpr unsigned int DoubleBuffers_TypeDefinitionIndex = 28818;

	class DoubleBuffers : public Il2CppObject
	{
	public:
		::System::Object** deviceToBufferMapping; // 0x10

		::System::Object** GetFrontBuffer(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void SetBackBuffer(::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_SETBACKBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** GetBackBuffer(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_GETBACKBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_GET_VALID_OFFSET))(nullptr);
		}

		::System::Void SetFrontBuffer(::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SwapBuffers(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEBUFFERS_SWAPBUFFERS_OFFSET))(arg, nullptr);
		}

	};

